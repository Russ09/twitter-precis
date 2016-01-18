#ifndef __HASHTAG_TRANSFER_MATRIX_H__
#define __HASHTAG_TRANSFER_MATRIX_H__


#include <vector>
#include <string>
#include <map>
#include <unordered_map>




class HashtagTransferMatrix {

private:
	const std::string							_hashtagName;
	std::unordered_map < std::string, int>		_transferMatrix;


public:

	void				HashtagTransferMatrix(void);
	void				~HashtagTransferMatrix(void);

	void				addTweet(const Tweet& inputTweet);
	std::string&		sampleFromTransferMatrix(const std::string& firstPrefix,const std::string& secondPrefix) const;

};


