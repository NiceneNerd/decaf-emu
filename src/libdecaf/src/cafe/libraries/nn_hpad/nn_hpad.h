#pragma once
#include "cafe/libraries/cafe_hle_library.h"

namespace cafe::nn::hpad
{

class Library : public hle::Library
{
public:
   Library() :
      hle::Library(hle::LibraryId::nn_hpad, "nn_hpad.rpl")
   {
   }

protected:
   virtual void registerSymbols() override;

private:
};

} // namespace cafe::nn::hpad
