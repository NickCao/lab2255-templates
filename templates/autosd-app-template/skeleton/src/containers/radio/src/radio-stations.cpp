#include "radio-stations.hpp"

#define SONGS(_station) (_station ## _songs), sizeof(_station ## _songs)/sizeof(struct song_info_t)

static struct song_info_t radio_los_santos_songs[] = {
  { "YG", "I'm A Real 1", 2013 },
  { "100s", "Life of a Mack", 2013 },
  { "Ab-Soul feat. Kendrick Lamar", "ILLuminate", 2012 },
  { "A$AP Rocky feat. Aston Matthews & Joey Fatts", "R-Cali", 2013 },
  { "Marion Band$ feat. Nipsey Hussle", "Hold Up", 2013 },
  { "BJ the Chicago Kid feat. Freddie Gibbs & Problem", "Smokin' and Ridin'", 2013 },
  { "Kendrick Lamar", "A.D.H.D", 2011 },
  { "Jay Rock feat. Kendrick Lamar", "Hood Gone Love It", 2011 },
  { "The Game feat. 2 Chainz & Rick Ross", "Ali Bomaye", 2012 },
  { "Freddie Gibbs", "Still Livin'", 2012 },
  { "DJ Esco feat. Future", "How It Was", 2013 },
  { "Problem feat. Glasses Malone", "Say That Then", 2013 },
  { "Clyde Carson feat. The Team", "Slow Down", 2012 },
  { "Gucci Mane feat. Ciara", "Too Hood", 2011 },
  { "Gangrene", "Bassheads", 2013 },
  { "Danny Brown & Action Bronson", "Bad News", 2013 },
  { "G-Side feat. G-Mane", "Relaxin'", 2010 },
  { "A$AP Ferg", "Work", 2013 },
  { "Trouble feat. Gucci Mane", "Everyday", 2012 },
  { "Kendrick Lamar", "Swimming Pools, Drank", 2012 },
  { "Travi$ Scott feat. 2 Chainz & T.I.", "Upper Echelon", 2013 },
  { "Danny Brown feat. A$AP Rocky & Zelooperz", "Kush Coma", 2013 },
  { "Ace Hood feat. Future & Rick Ross", "Bugatti", 2013 },
  { "Schoolboy Q feat. Kendrick Lamar", "Collard Greens", 2013 },
  { "Chuck Inglish feat. Ab-Soul & Mac Miller", "Came Thru/Easily", 2013 },
  { "Young Scooter feat. Gucci Mane", "Work", 2013 },
  { "Problem & IamSu feat. Bad Lucc & Sage The Gemini", "Do It Big", 2013 },
  { "Skeme", "Millions", 2013 },
  { "Ab-Soul feat. Schoolboy Q", "Hunnid Stax", 2014 },
  { "Freddie Gibbs & Mike Dean", "Sellin' Dope", 2014 },
  { "Young Scooter feat. Trinidad James", "I Can't Wait", 2013 },
};


static struct song_info_t space_103_2_songs[] = {
 { "Bootsy's Rubber Band", "I'd Rather Be With You", 1976 },
 { "D-Train", "You're the One for Me", 1981 },
 { "Eddie Murphy", "Party All the Time", 1985 },
 { "Evelyn \"Champagne\" King", "I'm in Love, 12\" Version", 1981 },
 { "Kano", "Can't Hold Back, Your Loving", 1981 },
 { "Kleeer", "Tonight", 1984 },
 { "Bernard Wright", "Haboglabotribin’", 1981 },
 { "One Way", "Cutie Pie", 1982 },
 { "Rick James", "Give It to Me Baby", 1981 },
 { "Sho Nuff", "Funkasize You", 1978 },
 { "Stevie Wonder", "Skeletons", 1987 },
 { "Taana Gardner",  "Heartbeat, Club Version", 1981 },
 { "Zapp", "Heartbreaker, Pts. 1-2", 1983 },
 { "Dazz Band", "Joystick", 1983 },
 { "Roger", "Do It Roger", 1981 },
 { "Imagination", "Flashback", 1981 },
 { "Parliament", "Mothership Connection, Star Child", 1975 },
 { "The Fatback Band", "Gotta Get My Hands On Some, Money", 1979 },
 { "Billy Ocean", "Nights, Feel Like Gettin' Down", 1981 },
 { "Parliament", "Flash Light", 1977 },
 { "Cameo", "Back and Forth", 1986 },
 { "Central Line", "Walking Into Sunshine", 1981 },
};

static struct song_info_t west_cost_classics_songs[] = {
 { "2Pac", "Ambitionz Az a Ridah", 1996 },
 { "Compton's Most Wanted", "Late Night Hype", 1990 },
 { "DJ Quik", "Dollaz + Sense", 1995 },
 { "Dr. Dre feat. Snoop Dogg", "Still D.R.E", 1999 },
 { "King Tee", "Played Like a Piano", 1990 },
 { "Dr. Dre feat. Snoop Dogg, Kurupt & Nate Dogg", "The Next Episode", 1999 },
 { "Ice Cube", "You Know How We Do It", 1994 },
 { "Kausion feat. Ice Cube", "What You Wanna Do?", 1995 },
 { "Kurupt", "C-Walk", 1998 },
 { "Mack 10 & Tha Dogg Pound", "Nothin' But the Cavi Hit", 1996 },
 { "MC Eiht", "Streiht Up Menace", 1993 },
 { "N.W.A", "Appetite for Destruction", 1991 },
 { "N.W.A", "Gangsta Gangsta", 1988 },
 { "Tha Dogg Pound", "What Would U Do?", 1995 },
 { "Snoop Dogg", "Gin and Juice", 1993 },
 { "Geto Boys", "Mind Playing Tricks on Me", 1991 },
 { "Too $hort", "So You Want to Be a Gangster", 1992 },
 { "Jayo Felony", "Sherm Stick", 1995 },
 { "Warren G", "This D.J.", 1994 },
 { "CPO feat. MC Ren", "Ballad Of A Menace", 1990 },
 { "E-40 feat. The Click", "Captain Save a Hoe", 1994 },
 { "The Conscious Daughters", "We Roll Deep", 1993 },
 { "Eazy-E feat. Ice Cube", "No More ?'s", 1988 },
 { "South Central Cartel", "Servin' 'Em Heat", 1993 },
 { "The Lady of Rage feat. Snoop Dogg", "Afro Puffs", 1994 },
 { "Westside Connection", "Bow Down", 1996 },
 { "Spice 1 feat. MC Eiht", "The Murda Show", 1993 },
 { "Bone Thugs-N-Harmony", "1st of Tha Month", 1995 },
 { "Luniz feat. Michael Marshall", "I Got 5 On It", 1995 },
};

static struct song_info_t rebel_radio_songs[] = {
 { "Charlie Feathers", "Can't Hardly Stand It", 1956 },
 { "Hank Thompson", "It Don't Hurt Anymore", 1957 },
 { "Hasil Adkins", "Get Outta My Car", 1966 },
 { "Jerry Reed", "You Took All the Ramblin' Out of Me", 1972 },
 { "Johnny Cash", "The General Lee", 1981 },
 { "Johnny Paycheck", "(It Won't Be Long And I'll Be Hating You", 1968 },
 { "Ozark Mountain Daredevils", "If You Wanna Get to Heaven", 1973 },
 { "Waylon Jennings", "Are You Sure Hank Done It This Way", 1975 },
 { "Waylon Jennings", "I Ain't Living Long Like This", 1979 },
 { "Willie Nelson", "Whiskey River", 1973 },
 { "C.W. McCall", "Convoy", 1975 },
 { "Homer & Jethro", "She Made Toothpicks Of The Timber Of My Heart", 1963 },
 { "The Highwaymen", "Highwayman", 1985 },
 { "Tammy Wynette", "D-I-V-O-R-C-E", 1968 },
 { "Ray Price", "Crazy Arms", 1956 },
 { "Marvin Jackson", "Dippin' Snuff", 1957 },
 { "Charlie Feathers", "Get With It", 1956 },
};

static struct song_info_t los_santos_rock_radio_songs[] = {
 { "Billy Squier", "Lonely Is the Night", 1981 },
 { "Bob Seger & The Silver Bullet Band", "Hollywood Nights", 1978 },
 { "Bob Seger & The Silver Bullet Band", "Night Moves", 1976 },
 { "Chicago", "If You Leave Me Now", 1976 },
 { "Def Leppard", "Photograph", 1983 },
 { "Don Johnson", "Heartbeat", 1986 },
 { "Elton John", "Saturday Night's Alright for Fighting", 1973 },
 { "Foreigner", "Dirty White Boy", 1979 },
 { "Gerry Rafferty", "Baker Street", 1978 },
 { "The Greg Kihn Band", "The Breakup Song, They Don't Write 'Em", 1981 },
 { "Julian Lennon", "Too Late for Goodbyes", 1984 },
 { "Kenny Loggins", "I'm Free, Heaven Helps the Man", 1984 },
 { "Phil Collins", "I Don't Care Anymore", 1982 },
 { "Queen", "Radio Ga Ga", 1984 },
 { "Robert Plant", "Big Log", 1983 },
 { "Simple Minds", "All the Things She Said", 1985 },
 { "The Small Faces", "Ogdens' Nut Gone Flake", 1968 },
 { "Steve Winwood", "Higher Love", 1986 },
 { "Stevie Nicks", "I Can't Wait", 1985 },
 { "The Alan Parsons Project", "I Wouldn't Want To Be Like You", 1977 },
 { "The Doobie Brothers", "What a Fool Believes", 1979 },
 { "The Cult", "Rain", 1985 },
 { "Steve Miller Band", "Rock'n Me", 1976 },
 { "Creedence Clearwater Revival", "Fortunate Son", 1969 },
 { "Starship", "We Built This City", 1985 },
 { "Mountain", "Mississippi Queen", 1970 },
 { "Kenny Loggins", "Danger Zone", 1986 },
 { "Alannah Myles", "Black Velvet", 1989 },
 { "Pat Benatar", "Shadows of the Night", 1982 },
 { "Belinda Carlisle", "Circle in the Sand", 1987 },
 { "Kansas", "Carry On Wayward Son", 1976 },
 { "Boston", "Peace Of Mind", 1976 },
 { "Harry Chapin", "Cat's In the Cradle", 1974 },
 { "Survivor", "Burning Heart", 1986 },
 { "Humble Pie", "30 Days In the Hole", 1972 },
 { "ZZ Top", "Gimme All Your Lovin'", 1983 },
 { "Yes", "Roundabout", 1972 },
 { "Broken English", "Comin' On Strong", 1987 },
};

static struct song_info_t the_lowdown_songs[] = {
 { "Aaron Neville", "Hercules", 1973 },
 { "B.T. Express", "Do It, 'Til You're Satisfied", 1974 },
 { "El Chicano", "Viva Tirado", 1970 },
 { "George McCrae", "I Get Lifted", 1974 },
 { "Marlena Shaw", "California Soul", 1969 },
 { "Smokey Robinson", "Cruisin'", 1979 },
 { "The Delfonics", "Ready or Not Here I Come, Can't Hide from Love", 1968 },
 { "The Five Stairsteps", "O-O-H Child", 1970 },
 { "The Soul Searchers", "Ashley's Roachclip", 1974 },
 { "The Trammps", "Rubber Band", 1972 },
 { "The Undisputed Truth", "Smiling Faces Sometimes", 1971 },
 { "War", "The Cisco Kid", 1973 },
 { "Pleasure", "Bouncy Lady", 1975 },
 { "The Delfonics", "Funny Feeling", 1970 },
 { "Ohio Players", "Climax", 1974 },
 { "The Chakachas", "Stories", 1972 },
 { "Eric Burdon & War", "Magic Mountain", 1976 },
 { "Johnny \"Guitar\" Watson", "Superman Lover", 1976 },
 { "The Jackson Sisters", "I Believe In Miracles", 1973 },
 { "Brass Construction", "Changin'", 1975 },
};

static struct song_info_t the_blue_ark_songs[] = {
 { "Chronixx", "Odd Ras", 2012 },
 { "Dennis Brown", "Money In My Pocket", 1972 },
 { "Gregory Isaacs", "Night Nurse", 1982 },
 { "Half Pint", "Crazy Girl", 1997 },
 { "Joe Gibbs & The Professionals", "Chapter Three", 1978 },
 { "Junior Delgado", "Sons Of Slaves", 1977 },
 { "Konshens", "Gun Shot A Fire", 2012 },
 { "Lee \"Scratch\" Perry & The Upsetters", "I Am A Madman", 1986 },
 { "Lee \"Scratch\" Perry & The Full Experience", "Disco Devil", 1977 },
 { "The Upsetters", "Grumblin' Dub", 1977 },
 { "Tommy Lee Sparta", "Psycho", 2012 },
 { "Vybz Kartel feat. Popcaan", "We Never Fear Dem", 2011 },
 { "Yellowman", "Nobody Move, Nobody Get Hurt", 1984 },
 { "Protoje", "Kingston Be Wise", 2012 },
 { "Demarco", "Loyal, Royals Remix", 2014 },
 { "Busy Signal feat. Damian \"Jr. Gong\" Marley", "Kingston Town, Remix", 2012 },
 { "I-Octane", "Topic of the Day", 2011 },
 { "Vybz Kartel", "Addi Truth", 2014 },
 { "Lee \"Scratch\" Perry", "Money Come and Money Go", 2010 },
 { "Lee \"Scratch\" Perry", "Roast Fish & Cornbread", 1978 },
 { "Danny Hensworth", "Mr. Money Man", 1978 },
};

static struct song_info_t non_stop_pop_songs[] = {
 { "All Saints", "Pure Shores", 1999 },
 { "Britney Spears", "Gimme More", 2007 },
 { "Corona", "The Rhythm of the Night, Rapino Bros. 7'' Single", 1993 },
 { "Fergie feat. Ludacris", "Glamorous", 2006 },
 { "Hall & Oates", "Adult Education", 1983 },
 { "Jane Child", "Don't Wanna Fall In Love", 1990 },
 { "Kelly Rowland", "Work, Freemasons Remix", 2007 },
 { "Mis-Teeq", "Scandalous", 2003 },
 { "Modjo", "Lady, Hear Me Tonight", 2000 },
 { "N-Joi", "Anthem", 1990 },
 { "Pet Shop Boys", "West End Girls", 1985 },
 { "Rihanna", "Only Girl, In The World", 2010 },
 { "Robyn feat. Kleerup", "With Every Heartbeat", 2007 },
 { "Stardust", "Music Sounds Better With You", 1998 },
 { "Wham!", "Everything She Wants", 1984 },
 { "Amerie", "1 Thing", 2005 },
 { "Robert Howard & Kym Mazelle", "Wait", 1989 },
 { "Sly Fox", "Let's Go All the Way", 1985 },
 { "Taylor Dayne", "Tell It to My Heart", 1987 },
 { "Living In A Box", "Living In A Box", 1987 },
 { "INXS", "New Sensation", 1988 },
 { "Bobby Brown", "On Our Own", 1989 },
 { "Bronski Beat", "Smalltown Boy", 1984 },
 { "Naked Eyes", "Promises, Promises", 1983 },
 { "Simply Red", "Something Got Me Started, Hurley's House Mix", 1991 },
 { "Sneaker Pimps", "6 Underground", 1996 },
 { "Backstreet Boys", "I Want It That Way", 1999 },
 { "Jamiroquai", "Alright", 1996 },
 { "Morcheeba", "Tape Loop, Shortcheeba Mix", 1996 },
 { "Moloko", "The Time Is Now", 2000 },
 { "Gorillaz feat. De La Soul", "Feel Good Inc.", 2005 },
 { "Robbie Williams & Kylie Minogue", "Kids", 2000 },
 { "Dirty Vegas", "Days Go By", 2001 },
 { "Cassie", "Me & U", 2006 },
 { "Maroon 5 feat. Christina Aguilera", "Moves Like Jagger", 2011 },
 { "M.I.A.", "Bad Girls", 2012 },
 { "M83", "Midnight City", 2011 },
 { "Lady Gaga", "Applause", 2013 },
 { "Mike Posner", "Cooler Than Me", 2010 },
 { "Lorde", "Tennis Court", 2013 },
 { "The Black Eyed Peas", "Meet Me Halfway", 2009 },
 { "Real Life", "Send Me An Angel '89", 1989 },
};

static struct song_info_t east_los_songs[] = {
 { "Hechizeros Band", "El Sonidito", 2008 },
 { "Los Buitres de Culiacan", "El Cocaino", 2012 },
 { "Mexican Institute of Sound", "Es-Toy", 2012 },
 { "Niña Dioz", "Criminal Sound, El Hijo De La Cumbia Remix", 2010 },
 { "La Vida Bohème", "Radio Capital", 2011 },
 { "Fandango", "Autos, Moda y Rock and Roll", 1987 },
 { "Don Cheto", "El Tatuado", 2007 },
 { "La Sonora Dinamita", "Se Me Perdió La Cadenita", 1978 },
 { "Fiebre de Jack", "She's A Tease", 2010 },
 { "Maldita Vecindad", "Pachuco", 1991 },
 { "Jessy Bulbo", "Maldito", 2007 },
 { "Milkman", "Fresco", 2012 },
 { "La Liga ft. Alika", "Tengo El Don", 2012 },
 { "Los Tigres Del Norte", "La Granja", 2009 },
 { "Los Ángeles Negros", "El Rey Y Yo", 1970 },
};

static struct song_info_t worldwide_songs[] = {
 { "Cashmere Cat", "Mirror Maru", 2012 },
 { "The Hics", "Cold Air", 2013 },
 { "inc.", "The Place", 2013 },
 { "Trickski", "Beginning", 2011 },
 { "Mala", "Ghost", 2012 },
 { "Swindle", "Forest Funk", 2012 },
 { "Tom Browne", "Throw Down", 1979 },
 { "Donald Byrd", "You And The Music", 1975 },
 { "Candido", "Thousand Finger Man", 1970 },
 { "Toro Y Moi", "Harm in Change", 2013 },
 { "Kyodai", "Breaking", 2012 },
 { "Django Django", "Waveforms", 2011 },
 { "The Gaslamp Killer", "Nissim", 2012 },
 { "Owiny Sigoma Band", "Harpoon Land", 2013 },
 { "Guts", "Brand New Revolution", 2011 },
 { "Yuna", "Live Your Life, MELO-X MOTHERLAND GOD MIX", 2012 },
 { "Tucillo & Kiko Navarro feat. Amor", "Lovery, Slow Cuban Vibe Mix", 2012 },
 { "Richard Spaven", "1759, Outro", 2010 },
 { "Hackman", "Forgotten Notes", 2012 },
 { "Sinkane feat. Salvatore Principato", "Shark Week", 2014 },
 { "William Onyeabor", "Body & Soul", 1980 },
 { "Four Tet", "Kool FM", 2013 },
 { "Mount Kimbie", "Made To Stray", 2013 },
 { "Anushka", "World in a Room", 2014 },
 { "Smokey Robinson", "Why You Wanna See My Bad Side?", 1978 },
 { "Randy Crawford", "Street Life", 1979 },
 { "Flume", "What You Need", 2012 },
 { "Earl Sweatshirt feat. Vince Staples & Casey Veggies", "Hive", 2013 },
 { "Portishead", "Numb", 1994 },
 { "Jon Wayne", "Black Magic", 2013 },
 { "Roman GianArthur", "I-69", 2013 },
 { "Lion Babe", "Treat Me Like Fire", 2013 },
 { "Dam-Funk", "Killdat", 2009 },
 { "Jamie Lidell", "Runaway", 2014 },
 { "CHVRCHES", "Recover, Cid Rim Remix", 2013 },
 { "Jimmy Edgar", "Let Yrself Be", 2012 },
 { "Clap! Clap!", "Viajero", 2014 },
 { "Maga Bo feat. Rosangela Macedo and Marcelo Yuka", "No Balanço da Canoa", 2012 },
};

static struct song_info_t channel_x_songs[] = {
 { "Agent Orange", "Bored of You", 1980 },
 { "Black Flag", "My War", 1984 },
 { "Circle Jerks", "Rock House", 1985 },
 { "Fear", "The Mouth Don't Stop, The Trouble With Women Is", 1985 },
 { "OFF!", "What's Next", 2013 },
 { "Adolescents", "Amoeba", 1981 },
 { "Descendents", "Pervert", 1985 },
 { "The Germs", "Lexicon Devil", 1978 },
 { "The Weirdos", "Life of Crime", 1977 },
 { "T.S.O.L.", "Abolish Government/Silent Majority", 1981 },
 { "Youth Brigade", "Blown Away", 1983 },
 { "Suicidal Tendencies", "Subliminal", 1983 },
 { "D.O.A.", "The Enemy", 1980 },
 { "MDC", "John Wayne Was a Nazi", 1980 },
 { "The Zeros", "Don't Push Me Around", 1980 },
 { "X", "Los Angeles", 1980 },
 { "D.R.I.", "I Don't Need Society", 1985 },
 { "Redd Kross", "Linda Blair", 1982 },
};

static struct song_info_t radio_mirror_park_songs[] = {
 { "Battle Tapes", "Feel the Same", 2012 },
 { "Dan Croll", "From Nowhere, Baardsen Remix", 2012 },
 { "DJ Mehdi", "Lucky Boy, Outlines Remix", 2006 },
 { "Feathers", "Dark Matter", 2013 },
 { "Jai Paul", "Jasmine, Demo Version", 2012 },
 { "Living Days", "Little White Lie", 2010 },
 { "Miami Horror", "Sometimes", 2009 },
 { "Tony Castles", "Heart In The Pipes, KAUF Remix", 2011 },
 { "Toro Y Moi", "So Many Details", 2012 },
 { "Twin Shadow", "Shooting Holes", 2010 },
 { "Twin Shadow", "Old Love / New Love", 2013 },
 { "Y.A.C.H.T.", "Psychic City, Classixx Remix", 2009 },
 { "Black Strobe", "Boogie in Zero Gravity", 2012 },
 { "Age of Consent", "Colours", 2013 },
 { "Favored Nations", "The Set Up", 2013 },
 { "Neon Indian", "Change Of Coast", 2013 },
 { "Nite Jewel", "Nowhere To Go", 2013 },
 { "Yeasayer", "Don't Come Close", 2013 },
 { "The Chain Gang of 1974", "Sleepwalking", 2013 },
 { "Poolside", "Do You Believe?", 2010 },
 { "The C90s", "Shine A Light, Flight Facilities Remix", 2010 },
 { "HEALTH", "High Pressure Dave", 2013 },
 { "The Ruby Suns", "In Real Life", 2013 },
 { "Neon Indian", "Polish Girl", 2011 },
 { "Mitzi", "Truly Alive", 2013 },
 { "KAUF", "When You're Out", 2013 },
 { "Panama", "Always", 2014 },
 { "Twin Shadow", "Forget", 2010 },
 { "!!!", "One Girl/One Boy", 2013 },
 { "SBTRKT feat. Roses Gabor", "Pharaohs", 2011 },
 { "Yeasayer", "O.N.E.", 2010 },
 { "Toro Y Moi", "New Beat", 2011 },
 { "Niki and the Dove", "The Drummer", 2011 },
 { "Little Dragon", "Crystalfilm", 2011 },
 { "Hot Chip", "Flutes", 2012 },
 { "Dom", "Living In America", 2010 },
 { "Holy Ghost!", "Hold On", 2011 },
 { "Scenic", "Mesmerised", 2013 },
 { "Cut Copy", "Strangers in the Wind", 2008 },
 { "Age of Consent", "Heartbreak", 2012 },
};

static struct song_info_t vinewood_boulevard_songs[] = {
 { "Wavves", "Nine Is God", 2013 },
 { "FIDLAR", "Cocaine", 2013 },
 { "Bass Drum of Death", "Crawling After You", 2013 },
 { "Hot Snakes", "This Mystic Decade", 2004 },
 { "Moon Duo", "Sleepwalker", 2012 },
 { "Sam Flax", "Fire Doesn't Burn Itself", 2012 },
 { "Shark?", "California Grrls", 2013 },
 { "The Black Angels", "Black Grease", 2005 },
 { "METZ", "Wet Blanket", 2012 },
 { "Ceremony", "Hysteria", 2012 },
 { "Ty Segall Band", "Diddy Wah Diddy", 2012 },
 { "Thee Oh Sees", "The Dream", 2011 },
 { "The Men", "Turn It Around", 2012 },
 { "Bleached", "Next Stop", 2013 },
 { "JEFF the Brotherhood", "Sixpack", 2012 },
 { "Coliseum", "Used Blood", 2013 },
 { "The Soft Pack", "Answer to Yourself", 2009 },
 { "The Orwells", "Who Needs You", 2013 },
 { "Nobunny", "Gone For Good", 2010 },
 { "Mind Spiders", "Fall in Line", 2012 },
};

static struct song_info_t soulwax_songs[] = {
 { "Palmbomen", "Stock, Soulwax Remix", 2013 },
 { "Fatal Error", "Fatal Error", 1988 },
 { "Supersempfft", "Let's Beam Him Up", 1979 },
 { "Mim Suleiman", "Mingi", 2010 },
 { "FKClub", "The Strange Art, Inflagranti Remix", 2013 },
 { "Matias Aguayo", "El Sucu Tucu", 2013 },
 { "Daniel Avery", "Naive Response", 2013 },
 { "Joe Goddard feat. Valentina", "Gabriel, Soulwax Remix", 2012 },
 { "Daniel Maloso", "Body Music, Original Mix", 2012 },
 { "Green Velvet & Harvard Bass", "Lazer Beams", 2012 },
 { "Zombie Nation", "Tryouts", 2012 },
 { "Tom Rowlands", "Nothing But Pleasure", 2013 },
 { "Jackson and His Computerband", "Arp #1", 2013 },
 { "Goose", "Synrise, Soulwax Remix", 2013 },
 { "Transistorcake", "Mr. Croissant Taker", 2013 },
 { "Tiga", "Plush, Jacques Lu Cont Remix", 2012 },
 { "The Hacker", "Shockwave, Gesaffelstein Remix", 2012 },
 { "Pulp", "After You, Soulwax Remix", 2013 },
};

static struct song_info_t flylo_songs[] = {
 { "Flying Lotus feat. Niki Randa", "Getting There", 2012 },
 { "Clams Casino", "Crystals", 2013 },
 { "Flying Lotus", "Crosswerved", 2013 },
 { "Flying Lotus", "Be Spin", 2013 },
 { "Flying Lotus feat. Erykah Badu", "See Thru To U", 2013 },
 { "Flying Lotus", "The Diddler", 2013 },
 { "Flying Lotus", "Computer Face Rmx", 2011 },
 { "Hudson Mohawke", "100hm", 2013 },
 { "Flying Lotus feat. Niki Randa", "The Kill", 2013 },
 { "Tyler, the Creator", "Garbage", 2013 },
 { "Outkast", "Elevators, Me & You", 1996 },
 { "Captain Murphy", "Evil Grin", 2013 },
 { "Flying Lotus", "Catapult Man", 2013 },
 { "Dabrye", "Encoded Flow", 2006 },
 { "Machinedrum", "She Died There", 2011 },
 { "DJ Rashad", "It's Wack", 2013 },
 { "Thundercat", "Oh Sheit It's X", 2013 },
 { "Flying Lotus", "Stonecutters", 2013 },
 { "Shadow Child", "23", 2012 },
 { "Kingdom", "Stalker Ha", 2011 },
 { "Aphex Twin", "Windowlicker", 1999 },
 { "Curtis Mayfield", "Eddie You Should Know Better", 1972 },
 { "Doris", "You Never Come Closer", 1970 },
 { "Flying Lotus feat. Krayzie Bone", "Medication Medication", 2014 },
 { "XXYYXX", "Work Title: What We Want", 2014 },
 { "Lapalux", "Make Money", 2014 },
 { "The Gaslamp Killer", "Shred You To Bits", 2014 },
 { "Mono/Poly & Thundercat", "B Adams", 2014 },
 { "Flying Lotus", "Osaka Trade", 2013 },
 { "DOOM", "Masquatch", 2014 },
 { "Flying Lotus", "Early Mountain", 2014 },
 { "Dimlite", "Into Vogon Skulls", 2012 },
 { "KNOWER", "Fuck the Makeup, Skip the Shower", 2010 },
 { "Kaskade", "4 AM, Araabmuzik Remix", 2006 },
};

static struct song_info_t the_lab_songs[] = {
 { "Gangrene feat. Samuel T. Herring & Earl Sweatshirt", "Play It Cool", 2015 },
 { "Ab-Soul feat. Aloe Blacc", "Trouble", 2015 },
 { "Tunde Adebimpe feat. Sal P & Sinkane", "Speedline Miracle Masterpiece", 2015 },
 { "MC Eiht & Freddie Gibbs feat. Kokane", "Welcome to Los Santos", 2015 },
 { "Phantogram", "K.Y.S.A", 2015 },
 { "Vybz Kartel", "Fast Life", 2015 },
 { "King Avriel feat. A$AP Ferg", "20's 50's 100's", 2015 },
 { "MNDR feat. Killer Mike", "Lock & Load", 2015 },
 { "Popcaan feat. Freddie Gibbs", "Born Bad", 2015 },
 { "E-40 feat. Dam-Funk & Ariel Pink", "California", 2015 },
 { "Wavves", "Leave", 2015 },
 { "Curren$y & Freddie Gibbs", "Fetti", 2015 },
 { "Little Dragon", "Wanderer", 2015 },
};

static struct radio_station_info_t radio_stations[] = {
  { "Radio Los Santos", SONGS(radio_los_santos) },
  { "Space 103.2", SONGS(space_103_2) },
  { "West Coast Classics", SONGS(west_cost_classics) },
  { "Rebel Radio", SONGS(rebel_radio) },
  { "Los Santos Rock Radio", SONGS(los_santos_rock_radio) },
  { "The Lowdown 91.1", SONGS(the_lowdown) },
  { "The Blue Ark", SONGS(the_blue_ark) },
  { "Non-Stop-Pop FM", SONGS(non_stop_pop) },
  { "East Los FM", SONGS(east_los) },
  { "WorldWide FM", SONGS(worldwide) },
  { "Channel X", SONGS(channel_x) },
  { "Radio Mirror Park", SONGS(radio_mirror_park) },
  { "Vinewood Boulevard Radio", SONGS(vinewood_boulevard) },
  { "Soulwax FM", SONGS(soulwax) },
  { "FlyLo FM", SONGS(flylo) },
  { "The Lab", SONGS(the_lab) },
};

#define N_STATIONS sizeof(radio_stations)/sizeof(struct radio_station_info_t)

void
radio_stations_init(void)
{
  for (uint32_t i = 0; i < N_STATIONS; i++)
    radio_stations[i].id = i;
}

uint32_t
n_radio_stations(void)
{
  return N_STATIONS;
}

const radio_station_info_t *
get_radio_stations(uint32_t id)
{
  return &radio_stations[id];
}
