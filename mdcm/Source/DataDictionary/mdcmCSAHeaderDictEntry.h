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
#ifndef MDCMCSAHEADERDICTENTRY_H
#define MDCMCSAHEADERDICTENTRY_H

#include "mdcmVR.h"
#include "mdcmVM.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

namespace mdcm
{
/**
 * Class to represent an Entry in the Dict
 * Does not really exist within the DICOM definition, just a way to
 * minimize storage and have a mapping from mdcm::Tag to the needed
 * information.
 *
 * TODO : Need a PublicCSAHeaderDictEntry, indeed CSAHeaderDictEntry
 * has a notion of retired which does not exist in
 * PrivateCSAHeaderDictEntry.
 *
 */
class MDCM_EXPORT CSAHeaderDictEntry
{
  friend std::ostream &
  operator<<(std::ostream &, const CSAHeaderDictEntry &);

public:
  CSAHeaderDictEntry(const char * name = "",
                     const VR &   vr = VR::INVALID,
                     const VM &   vm = VM::VM0,
                     const char * desc = "")
    : Name(name)
    , ValueRepresentation(vr)
    , ValueMultiplicity(vm)
    , Description(desc)
  {}
  const VR &
  GetVR() const
  {
    return ValueRepresentation;
  }
  void
  SetVR(const VR & vr)
  {
    ValueRepresentation = vr;
  }
  const VM &
  GetVM() const
  {
    return ValueMultiplicity;
  }
  void
  SetVM(const VM & vm)
  {
    ValueMultiplicity = vm;
  }
  const char *
  GetName() const
  {
    return Name.c_str();
  }
  void
  SetName(const char * name)
  {
    Name = name;
  }
  const char *
  GetDescription() const
  {
    return Description.c_str();
  }
  void
  SetDescription(const char * desc)
  {
    Description = desc;
  }
  bool
  operator<(const CSAHeaderDictEntry & entry) const
  {
    return strcmp(GetName(), entry.GetName()) < 0;
  }

private:
  std::string Name;
  VR          ValueRepresentation;
  VM          ValueMultiplicity;
  std::string Description;
  std::string Type; // TODO
};

inline std::ostream &
operator<<(std::ostream & os, const CSAHeaderDictEntry & val)
{
  if (val.Name.empty())
  {
    os << "[No name]";
  }
  else
  {
    os << val.Name;
  }
  os << "\t" << val.ValueRepresentation << "\t" << val.ValueMultiplicity;
  if (!val.Description.empty())
  {
    os << "\t" << val.Description;
  }
  return os;
}

} // end namespace mdcm

#endif // MDCMCSAHEADERDICTENTRY_H
