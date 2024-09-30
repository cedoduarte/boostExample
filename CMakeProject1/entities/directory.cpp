#include "directory.h"

#include <iostream>

Directory::Directory()
{
	m_name = "";
	m_path = "";
}

Directory::Directory(const Directory& other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		m_path = other.m_path;
	}
}

Directory::Directory(const std::string& name, const std::string& path)
{
	m_name = name;
	m_path = path;
}

void Directory::setName(const std::string& name)
{
	m_name = name;
}

void Directory::setPath(const std::string& path)
{
	m_path = path;
}

std::string Directory::name() const
{
	return m_name;
}

std::string Directory::path() const
{
	return m_path;
}

void Directory::print() const
{
	std::cout << " - " << m_path << ", " << m_name << std::endl;
}