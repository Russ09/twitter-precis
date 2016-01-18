
namespace std

class TweetHandler() {

private:
	char		*consumerKey;
	char		*consumerSecret;
	int			authKey;

public:

	void		tweetHandler(void); //Constructor
	void		~tweetHandler(void); //Destructor

	//Log in functions
	void		setConsumerKey(char *consumerKey);
	void		setConsumerSecret(char *consumerSecret);
	void		setLoginDetails(char *username, char *password);
	void		logIn(void);

	//Tweet retrival functions
	Tweet		getTweet();
	Tweet*		getTweetsGivenHashtag(char *hashtag);
}




class Tweet() {

	private:
		char	*messageString;
		int		*numReTweets;
		int		*numFavourites;
		char	*authorName;


	public:
		Tweet(void); 
		~Tweet(void);



}