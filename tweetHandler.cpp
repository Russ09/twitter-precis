
namespace std

class tweetHandler() {

private:
	char		*consumerKey;
	char		*consumerSecret;
	int			authKey;


public:

	void		tweetHandler(); //Constructor
	void		~tweetHandler(); //Destructor

	void		setConsumerKey(char *consumerKey);
	void		setConsumerSecret(char *consumerSecret);
	void		setLoginDetails(char *username, char *password);
	void		authorizeAccess(void);

	Tweet		getTweet();
	Tweet*		getTweetsGivenHashtag(char *hashtag);
}