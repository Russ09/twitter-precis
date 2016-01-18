#pragma once
#include <vector>
#include <map>
#include <string>

#include "hashtag_transfer_matrix.h"

class TransferMatrixDatabase {

private:
	std::vector <HashtagTransferMatrix>		_transferMatrices;
	std::map<std::string, int>				_hashtagNameNumberSwitch;

public:
	void			addTweet(const Tweet& inputTweet);
	std::string&	sampleFromHashtag(const std::string& hashtag, const std::string& firstPrefix, const std::string& secondPrefix)
};