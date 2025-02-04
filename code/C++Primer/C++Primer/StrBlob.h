#pragma once
#include<vector>
#include<string>
#include<memory>
class StrBlob  
{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> i1);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	//添加和删除元素
	void push_back(const std::string& t) { data->push_back(t); }
	void pop_back();
	//元素访问
	std::string& front();
	std::string& back();
private:
	std::shared_ptr<std::vector<std::string>> data;
	//如果data[i]不合法则抛出一个异常
	void check(size_type i, const std::string& msg) const;
};
