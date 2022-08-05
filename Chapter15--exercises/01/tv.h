// tv.h -- TV and Remote classes
#ifndef TV_H_
#define TV_H_
class Remote;

class Tv
{
    friend class Remote;
public:
    enum { Off, On };
    enum { MinVal, MaxVal = 20 };
    enum { Antenna, Cable };
    enum { TV, DVD };

    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const;
    void change_r_mode(Remote& r);
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

class Remote
{
    friend class Tv;
private:
    int mode;
    int r_mode;
    enum { Regular, Interact };
public:
    Remote(int m = Tv::TV, int f = Regular) : mode(m), r_mode(f) {}
    bool volup(Tv& t) { return t.volup(); }
    bool voldown(Tv& t) { return t.voldown(); }
    void onoff(Tv& t) { t.onoff(); }
    void chanup(Tv& t) { t.chanup(); }
    void chandown(Tv& t) { t.chandown(); }
    void set_chan(Tv& t, int c) { t.channel = c; }
    void set_mode(Tv& t) { t.set_mode(); }
    void set_input(Tv& t) { t.set_input(); }
    void show_r_mode() const { std::cout << "Now the remote mode is " << (r_mode == Regular ? "Regular" : "Interact") << ".\n"; }
};

inline void Tv::change_r_mode(Remote& r)
{
    if (ison())
    {
        if (r.r_mode == Remote::Regular)
            r.r_mode = Remote::Interact;
        else
            r.r_mode = Remote::Regular;
        r.show_r_mode();
    }
    else
    {
        std::cout << "The tv is off, please turn it on!\n";
    }
}

#endif