#ifndef MEMO_H
#define MEMO_H

#include <string>

class Memo
{
private:
	std::string mo_date;
	std::string mo_content;
	
public:
	Memo(std::string o_date, std::string o_content);
	
	std::string getDate();
	std::string getContent();
	
	bool isSameDate(Memo b);
	void show();
};

#endif /* MEMO_H */