// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class ABC
{
private:
    char* label;
    int rating;

public:
    ABC(const char* ch = "null", int n = 0);
    ABC(const ABC& abc);
    virtual ~ABC();
    virtual void View() const = 0;
    ABC& operator=(const ABC& abc);
    friend std::ostream& operator<<(std::ostream& os, const ABC& abc);
};

//  Base Class Using DMA
class baseDMA :public ABC
{
public:
    //virtual ~baseDMA();
    baseDMA(const char* ch = "null", int n = 0) :ABC(ch, n) { }
    baseDMA(const baseDMA& dma) :ABC(dma) { }
    virtual void View() const;
    //baseDMA & operator=(const baseDMA & rs);
    /*friend std::ostream & operator<<(std::ostream & os,
                                     const baseDMA & rs);*/
};

class lacksDMA :public ABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char* c = "blank", const char* l = "null",
        int r = 0);
    lacksDMA(const char* c, const baseDMA& rs);
    virtual void View() const;
    lacksDMA& operator=(const lacksDMA& rs);
    friend std::ostream& operator<<(std::ostream& os,
        const lacksDMA& rs);
};

// derived class with DMA
class hasDMA :public ABC
{
private:
    char* style;
public:
    hasDMA(const char* s = "none", const char* l = "null",
        int r = 0);
    hasDMA(const char* s, const baseDMA& rs);
    hasDMA(const hasDMA& hs);
    virtual ~hasDMA();
    virtual void View() const;
    hasDMA& operator=(const hasDMA& rs);
    friend std::ostream& operator<<(std::ostream& os,
        const hasDMA& rs);
};

#endif
