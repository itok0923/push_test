//LEDSet.h

#ifndef LEDSet_h
#define LEDSet_h

class LEDSet {
  public:
    LEDSet(int pin);
    void swtiching();
    void on();
        
  private:
    int LEDpin;
    int LEDStat;
};

#endif
