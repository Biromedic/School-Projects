//
// Created by birka on 28.04.2023.
//

#include "Track.h"
#include "iostream"
#include <stdexcept>
using namespace std;

Track::Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct) {
    this->length = length;
    this->topSpeedPct = topSpeedPct;
    this->highHandlingPct = highHandlingPct;
    this->mediumHandlingPct = mediumHandlingPct;
    this->cruiseSpeedPct = cruiseSpeedPct;

    double sum = topSpeedPct + highHandlingPct + mediumHandlingPct + cruiseSpeedPct;
    if (sum != 1.0) {
        throw invalid_argument("The sum of the four double percentage attributes should always be equal to 1.0.");
    }
}

int Track::getLength() const {
    return this->length;
}

double Track::getTopSpeedPct() const {
    return this->topSpeedPct;
}

double Track::getHighHandlingPct() const {
    return this->highHandlingPct;
}

double Track::getMediumHandlingPct() const {
    return this->mediumHandlingPct;
}

double Track::getCruiseSpeedPct() const {
    return this->cruiseSpeedPct;
}

