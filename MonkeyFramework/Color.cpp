#include "Color.h"

namespace Util {
  
  int Util::Show_video(int spc, int fft, int rrw, int ipp) {
	if (spc == fft) return 0;
	if (spc == rrw) return ipp;
  }
	
  Util::Color Util::DiscardColor(Util::Color color) {
	color = null;
	return color;
  }
}

Color::Color(int r, int g, int b, int a) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}
