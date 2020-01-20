#include "ImpellerNk.h"

#define DIST_PER_SPIN_CM     5.14
#define METERS_PER_CM        100.0

float ImpDistFromSpins(float nSpins)
{
   float distCm;

   distCm = nSpins * static_cast<float> (DIST_PER_SPIN_CM);

   return distCm / static_cast<float> (METERS_PER_CM);
}

float ImpSpinsFromDist(float distM)
{
   float distCm;

   distCm = distM * static_cast<float> (METERS_PER_CM);
   return distCm /  static_cast<float> (DIST_PER_SPIN_CM);
}

