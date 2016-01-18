#ifndef __TWEET_H__
#define __TWEET_H__


class Tweet {

	private:
		const std::string	_messageStringRaw;
		const std::string 	_messageStringProcessed;
		const std::string	_authorName;

		const int			_numRetweets;
		const int			_numFavourites;
		

	public:
		Tweet(void); 
		~Tweet(void);


		// Parse _messageStringProcessed and return vector containing each word in order
		std::vector<std::string>& getProcessedWords() const;
		




};

#endif