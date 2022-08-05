// dma.cpp --dma class methods
#include "dma2.h"
#include <cstring>

ABC::ABC(const char* ch, int n)
{
    label = new char[strlen(ch) + 1];
    strcpy_s(label, strlen(ch) + 1, ch);
    rating = n;
}

ABC::ABC(const ABC& abc)
{
    label = new char[strlen(abc.label) + 1];
    strcpy_s(label, strlen(abc.label) + 1, abc.label);
    rating = abc.rating;
}

ABC::~ABC()
{
    delete[] label;
}

void ABC::View() const
{
    std::cout << "label: " << label << "\t"
        << "rating: " << rating << std::endl;
}

ABC& ABC::operator=(const ABC& abc)
{
    if (this == &abc)
        return *this;
    delete[] label;
    label = new char[strlen(abc.label) + 1];
    strcpy_s(label, strlen(abc.label) + 1, abc.label);
    rating = abc.rating;
}

std::ostream& operator<<(std::ostream& os, const ABC& abc)
{
    os << "label: " << abc.label << "\t"
        << "rating: " << abc.rating << std::endl;
    return os;
}

// baseDMA methods
void baseDMA::View() const
{
    ABC::View();
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r)
    : ABC(l, r)
{
    strcpy_s(color, strlen(c) + 1, c);
    //strncpy_s(color, c, COL_LEN - 1);
    //std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs)
    : ABC(rs)
{
    strncpy_s(color, c, COL_LEN - 1);
    //std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
    std::cout << "color: " << color << std::endl;
    ABC::View();
}

lacksDMA& lacksDMA::operator=(const lacksDMA& rs)
{
    if (this == &rs)
        return *this;
    strcpy_s(color, strlen(rs.color) + 1, rs.color);
    ABC::operator=(rs);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
    os << "Color: " << ls.color << std::endl;
    os << (const ABC&)ls;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r)
    : ABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    strcpy_s(style, strlen(s) + 1, s);
    //std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs)
    : ABC(rs)
{
    style = new char[std::strlen(s) + 1];
    strcpy_s(style, strlen(s) + 1, s);
    //std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs)
    : ABC(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    strcpy_s(style, strlen(hs.style) + 1, hs.style);
    //std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

void hasDMA::View() const
{
    std::cout << "style: " << style << std::endl;
    ABC::View();
}

hasDMA& hasDMA::operator=(const hasDMA& hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);  // copy base portion
    delete[] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    strcpy_s(style, strlen(hs.style) + 1, hs.style);
    //std::strcpy(style, hs.style);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
    os << "Style: " << hs.style << std::endl;
    os << (const ABC&)hs;
    return os;
}
