
namespace std

class tweetHandler() {

private:
	char		*consumerKey;
	char		*consumerSecret;
	int			authKey;


public:
	void		setConsumerKey(char *consumerKey);
	void		setConsumerSecret(char *consumerSecret);
	void		setLoginDetails(char *username, char *password);
	void		authorizeAccess(void);

	Tweet		getTweet();


}