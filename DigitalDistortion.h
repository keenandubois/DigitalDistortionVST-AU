#ifndef __DIGITALDISTORTION__
#define __DIGITALDISTORTION__

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextra-tokens"
#include "IPlug_include_in_plug_hdr.h"
#pragma clang diagnostic pop

class DigitalDistortion : public IPlug
{
public:
  DigitalDistortion(IPlugInstanceInfo instanceInfo);
  ~DigitalDistortion();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mThreshold;
};

#endif
