#include <cmath>
class pt 
{
   public:
      void seta(int a)
      {
         pt_a = a;
      }
      void setb(int b)
      {
         pt_b = b;
      }
   protected:
      int pt_a;
      int pt_b;
};

class pt_num:public pt
{
    public:

    float pt_out()
    {
        float ptnum_a = pow(pt_a, 2);
        float ptnum_b = pow(pt_b, 2);

        float ptnum_c = ptnum_a + ptnum_b;

        float ptnum_over = sqrt(ptnum_c);
        return ptnum_over;
    }
    
    
};