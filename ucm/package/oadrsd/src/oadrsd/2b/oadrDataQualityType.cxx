// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "oadrDataQualityType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrDataQualityType
    // 

    oadrDataQualityType::
    oadrDataQualityType (value v)
    : ::xml_schema::token (_xsd_oadrDataQualityType_literals_[v])
    {
    }

    oadrDataQualityType::
    oadrDataQualityType (const char* v)
    : ::xml_schema::token (v)
    {
    }

    oadrDataQualityType::
    oadrDataQualityType (const ::std::string& v)
    : ::xml_schema::token (v)
    {
    }

    oadrDataQualityType::
    oadrDataQualityType (const ::xml_schema::token& v)
    : ::xml_schema::token (v)
    {
    }

    oadrDataQualityType::
    oadrDataQualityType (const oadrDataQualityType& v,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::token (v, f, c)
    {
    }

    oadrDataQualityType& oadrDataQualityType::
    operator= (value v)
    {
      static_cast< ::xml_schema::token& > (*this) = 
      ::xml_schema::token (_xsd_oadrDataQualityType_literals_[v]);

      return *this;
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    // oadrDataQualityType
    //

    oadrDataQualityType::
    oadrDataQualityType (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::token (e, f, c)
    {
      _xsd_oadrDataQualityType_convert ();
    }

    oadrDataQualityType::
    oadrDataQualityType (const ::xercesc::DOMAttr& a,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::token (a, f, c)
    {
      _xsd_oadrDataQualityType_convert ();
    }

    oadrDataQualityType::
    oadrDataQualityType (const ::std::string& s,
                         const ::xercesc::DOMElement* e,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::token (s, e, f, c)
    {
      _xsd_oadrDataQualityType_convert ();
    }

    oadrDataQualityType* oadrDataQualityType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrDataQualityType (*this, f, c);
    }

    oadrDataQualityType::value oadrDataQualityType::
    _xsd_oadrDataQualityType_convert () const
    {
      ::xsd::cxx::tree::enum_comparator< char > c (_xsd_oadrDataQualityType_literals_);
      const value* i (::std::lower_bound (
                        _xsd_oadrDataQualityType_indexes_,
                        _xsd_oadrDataQualityType_indexes_ + 21,
                        *this,
                        c));

      if (i == _xsd_oadrDataQualityType_indexes_ + 21 || _xsd_oadrDataQualityType_literals_[*i] != *this)
      {
        throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
      }

      return *i;
    }

    const char* const oadrDataQualityType::
    _xsd_oadrDataQualityType_literals_[21] =
    {
      "No Quality - No Value",
      "No New Value - Previous Value Used",
      "Quality Bad - Non Specific",
      "Quality Bad - Configuration Error",
      "Quality Bad - Not Connected",
      "Quality Bad - Device Failure",
      "Quality Bad - Sensor Failure",
      "Quality Bad - Last Known Value",
      "Quality Bad - Comm Failure",
      "Quality Bad - Out of Service",
      "Quality Uncertain - Non Specific",
      "Quality Uncertain - Last Usable Value",
      "Quality Uncertain - Sensor Not Accurate",
      "Quality Uncertain - EU Units Exceeded",
      "Quality Uncertain - Sub Normal",
      "Quality Good - Non Specific",
      "Quality Good - Local Override",
      "Quality Limit - Field/Not",
      "Quality Limit - Field/Low",
      "Quality Limit - Field/High",
      "Quality Limit - Field/Constant"
    };

    const oadrDataQualityType::value oadrDataQualityType::
    _xsd_oadrDataQualityType_indexes_[21] =
    {
      ::oadr2b::oadr::oadrDataQualityType::No_New_Value___Previous_Value_Used,
      ::oadr2b::oadr::oadrDataQualityType::No_Quality___No_Value,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Comm_Failure,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Configuration_Error,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Device_Failure,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Last_Known_Value,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Non_Specific,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Not_Connected,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Out_of_Service,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Bad___Sensor_Failure,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Good___Local_Override,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Good___Non_Specific,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Limit___Field_Constant,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Limit___Field_High,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Limit___Field_Low,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Limit___Field_Not,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Uncertain___EU_Units_Exceeded,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Uncertain___Last_Usable_Value,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Uncertain___Non_Specific,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Uncertain___Sensor_Not_Accurate,
      ::oadr2b::oadr::oadrDataQualityType::Quality_Uncertain___Sub_Normal
    };

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrDataQualityType >
    _xsd_oadrDataQualityType_type_factory_init (
      "oadrDataQualityType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
  {
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrDataQualityType& i)
    {
      e << static_cast< const ::xml_schema::token& > (i);
    }

    void
    operator<< (::xercesc::DOMAttr& a, const oadrDataQualityType& i)
    {
      a << static_cast< const ::xml_schema::token& > (i);
    }

    void
    operator<< (::xml_schema::list_stream& l,
                const oadrDataQualityType& i)
    {
      l << static_cast< const ::xml_schema::token& > (i);
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrDataQualityType >
    _xsd_oadrDataQualityType_type_serializer_init (
      "oadrDataQualityType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

