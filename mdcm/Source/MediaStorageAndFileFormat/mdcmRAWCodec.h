/*********************************************************
 *
 * MDCM
 *
 * Modifications github.com/issakomi
 *
 *********************************************************/

/*=========================================================================

  Program: GDCM (Grassroots DICOM). A DICOM library

  Copyright (c) 2006-2011 Mathieu Malaterre
  All rights reserved.
  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef MDCMRAWCODEC_H
#define MDCMRAWCODEC_H

#include "mdcmImageCodec.h"

namespace mdcm
{

class RAWInternals;

class MDCM_EXPORT RAWCodec : public ImageCodec
{
public:
  RAWCodec() = default;
  ~RAWCodec() = default;
  bool
  CanCode(const TransferSyntax &) const override;
  bool
  CanDecode(const TransferSyntax &) const override;
  bool
  Code(const DataElement &, DataElement &) override;
  bool
  Decode(const DataElement &, DataElement &) override;
  bool
  GetHeaderInfo(std::istream &) override;
  bool
  DecodeBytes(const char *, size_t, char *, size_t);

protected:
  bool
  DecodeByStreams(std::istream &, std::ostream &) override;
};

} // end namespace mdcm

#endif // MDCMRAWCODEC_H
