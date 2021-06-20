#include <stdio.h>
struct tCircuito
{
  float R1,R2,V,i;

  float CalRSerie()
  {
    return R1 + R2;
  }

  float CalRPara()
  {
    return R1*R2/(R1+R2);
  }

  float CalISerie()
  {
    return V/CalRSerie();
  }

  float CalIPara()
  {
    return V/CalRPara();
  }

  float PotSerie()
  {
    return V*CalISerie();
  }

  float PotPara()
  {
    return V*CalIPara();
  }

};
