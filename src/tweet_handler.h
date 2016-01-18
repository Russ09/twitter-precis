#ifndef __TWEET_HANDLER_H__
#define __TWEET_HANDLER_H__

#include "tweet.h"



class TweetHandler {

private:
	const std::string	_consumerKey;
	const std::string	_consumerSecret;
	const int			_authKey;

	
	// Login might as well be private
	void login() const;

public:

				tweetHandler(void); //Constructor
				~tweetHandler(void); //Destructor


	//Tweet retrival functions
	Tweet&		getTweet() const;
	Tweet&		getTweetsGivenHashtag(const std::string& hashtag) const;

};






#endif