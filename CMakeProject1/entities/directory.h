#pragma once

#include <string>

class Directory
{
public:
	Directory();
	Directory(const Directory& other);
	Directory(const std::string& name, const std::string& path);
	void setName(const std::string& name);
	void setPath(const std::string& path);
	std::string name() const;
	std::string path() const;
	void print() const;
private:
	std::string m_name;
	std::string m_path;
};