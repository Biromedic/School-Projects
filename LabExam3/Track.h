//
// Created by birka on 28.04.2023.
//

#ifndef LABEXAM3_TRACK_H
#define LABEXAM3_TRACK_H

class Track{
public:
    Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct);
    int getLength() const;
    double getTopSpeedPct() const;
    double getHighHandlingPct() const;
    double getMediumHandlingPct() const;
    double getCruiseSpeedPct() const;
private:
    int length;
    double topSpeedPct;
    double highHandlingPct;
    double mediumHandlingPct;
    double cruiseSpeedPct;
};




#endif //LABEXAM3_TRACK_H
