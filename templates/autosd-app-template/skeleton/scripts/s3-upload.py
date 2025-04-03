#!/usr/bin/env python3

import os
import sys
import boto3
import argparse
from pathlib import Path

def upload_to_s3(source_file, bucket_name, destination_key=None):
    """
    Upload a file to an S3 bucket
    
    :param source_file: Path to the file to upload
    :param bucket_name: Bucket to upload to
    :param destination_key: S3 object key (path in bucket). If None, uses the filename
    :return: True if file was uploaded, else False
    """
    
    # Create S3 client
    s3_client = boto3.client('s3')
    
    # If no destination key provided, use the filename
    if destination_key is None:
        destination_key = os.path.basename(source_file)
    
    try:
        print(f"Uploading {source_file} to s3://{bucket_name}/{destination_key}")
        s3_client.upload_file(source_file, bucket_name, destination_key)
        print(f"Upload successful")
        return True
    except Exception as e:
        print(f"Error uploading file to S3: {str(e)}")
        return False

def main():
    parser = argparse.ArgumentParser(description='Upload a file to AWS S3')
    parser.add_argument('source_file', help='Path to the file to upload')
    parser.add_argument('--bucket', '-b', help='The S3 bucket')
    parser.add_argument('--destination', '-d', help='Destination key (path) in the S3 bucket')
    
    args = parser.parse_args()
    
    # Check if source file exists
    if not os.path.isfile(args.source_file):
        print(f"Error: Source file {args.source_file} does not exist")
        sys.exit(1)
    
    success = upload_to_s3(args.source_file, args.bucket, args.destination)
    sys.exit(0 if success else 1)

# python s3-upload.py /path/to/your/file.txt --bucket bucket --destination custom/path/in/bucket/file.txt
if __name__ == "__main__":
    main()
