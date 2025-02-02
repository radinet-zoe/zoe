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

#include "oadrSamplingRateType.hxx"

#include "DurationValueType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrSamplingRateType
    // 

    const oadrSamplingRateType::oadrMinPeriod_type& oadrSamplingRateType::
    oadrMinPeriod () const
    {
      return this->oadrMinPeriod_.get ();
    }

    oadrSamplingRateType::oadrMinPeriod_type& oadrSamplingRateType::
    oadrMinPeriod ()
    {
      return this->oadrMinPeriod_.get ();
    }

    void oadrSamplingRateType::
    oadrMinPeriod (const oadrMinPeriod_type& x)
    {
      this->oadrMinPeriod_.set (x);
    }

    void oadrSamplingRateType::
    oadrMinPeriod (::std::auto_ptr< oadrMinPeriod_type > x)
    {
      this->oadrMinPeriod_.set (x);
    }

    const oadrSamplingRateType::oadrMaxPeriod_type& oadrSamplingRateType::
    oadrMaxPeriod () const
    {
      return this->oadrMaxPeriod_.get ();
    }

    oadrSamplingRateType::oadrMaxPeriod_type& oadrSamplingRateType::
    oadrMaxPeriod ()
    {
      return this->oadrMaxPeriod_.get ();
    }

    void oadrSamplingRateType::
    oadrMaxPeriod (const oadrMaxPeriod_type& x)
    {
      this->oadrMaxPeriod_.set (x);
    }

    void oadrSamplingRateType::
    oadrMaxPeriod (::std::auto_ptr< oadrMaxPeriod_type > x)
    {
      this->oadrMaxPeriod_.set (x);
    }

    const oadrSamplingRateType::oadrOnChange_type& oadrSamplingRateType::
    oadrOnChange () const
    {
      return this->oadrOnChange_.get ();
    }

    oadrSamplingRateType::oadrOnChange_type& oadrSamplingRateType::
    oadrOnChange ()
    {
      return this->oadrOnChange_.get ();
    }

    void oadrSamplingRateType::
    oadrOnChange (const oadrOnChange_type& x)
    {
      this->oadrOnChange_.set (x);
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
    // oadrSamplingRateType
    //

    oadrSamplingRateType::
    oadrSamplingRateType (const oadrMinPeriod_type& oadrMinPeriod,
                          const oadrMaxPeriod_type& oadrMaxPeriod,
                          const oadrOnChange_type& oadrOnChange)
    : ::xml_schema::type (),
      oadrMinPeriod_ (oadrMinPeriod, this),
      oadrMaxPeriod_ (oadrMaxPeriod, this),
      oadrOnChange_ (oadrOnChange, this)
    {
    }

    oadrSamplingRateType::
    oadrSamplingRateType (::std::auto_ptr< oadrMinPeriod_type > oadrMinPeriod,
                          ::std::auto_ptr< oadrMaxPeriod_type > oadrMaxPeriod,
                          const oadrOnChange_type& oadrOnChange)
    : ::xml_schema::type (),
      oadrMinPeriod_ (oadrMinPeriod, this),
      oadrMaxPeriod_ (oadrMaxPeriod, this),
      oadrOnChange_ (oadrOnChange, this)
    {
    }

    oadrSamplingRateType::
    oadrSamplingRateType (const oadrSamplingRateType& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrMinPeriod_ (x.oadrMinPeriod_, f, this),
      oadrMaxPeriod_ (x.oadrMaxPeriod_, f, this),
      oadrOnChange_ (x.oadrOnChange_, f, this)
    {
    }

    oadrSamplingRateType::
    oadrSamplingRateType (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrMinPeriod_ (this),
      oadrMaxPeriod_ (this),
      oadrOnChange_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void oadrSamplingRateType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrMinPeriod
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrMinPeriod",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrMinPeriod_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!oadrMinPeriod_.present ())
            {
              ::std::auto_ptr< oadrMinPeriod_type > r (
                dynamic_cast< oadrMinPeriod_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->oadrMinPeriod_.set (r);
              continue;
            }
          }
        }

        // oadrMaxPeriod
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrMaxPeriod",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrMaxPeriod_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!oadrMaxPeriod_.present ())
            {
              ::std::auto_ptr< oadrMaxPeriod_type > r (
                dynamic_cast< oadrMaxPeriod_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->oadrMaxPeriod_.set (r);
              continue;
            }
          }
        }

        // oadrOnChange
        //
        if (n.name () == "oadrOnChange" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrOnChange_.present ())
          {
            this->oadrOnChange_.set (oadrOnChange_traits::create (i, f, this));
            continue;
          }
        }

        break;
      }

      if (!oadrMinPeriod_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrMinPeriod",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrMaxPeriod_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrMaxPeriod",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrOnChange_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrOnChange",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrSamplingRateType* oadrSamplingRateType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrSamplingRateType (*this, f, c);
    }

    oadrSamplingRateType& oadrSamplingRateType::
    operator= (const oadrSamplingRateType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrMinPeriod_ = x.oadrMinPeriod_;
        this->oadrMaxPeriod_ = x.oadrMaxPeriod_;
        this->oadrOnChange_ = x.oadrOnChange_;
      }

      return *this;
    }

    oadrSamplingRateType::
    ~oadrSamplingRateType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrSamplingRateType >
    _xsd_oadrSamplingRateType_type_factory_init (
      "oadrSamplingRateType",
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
    operator<< (::xercesc::DOMElement& e, const oadrSamplingRateType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrMinPeriod
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrSamplingRateType::oadrMinPeriod_type& x (i.oadrMinPeriod ());
        if (typeid (oadrSamplingRateType::oadrMinPeriod_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "oadrMinPeriod",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "oadrMinPeriod",
            "http://openadr.org/oadr-2.0b/2012/07",
            false, true, e, x);
      }

      // oadrMaxPeriod
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrSamplingRateType::oadrMaxPeriod_type& x (i.oadrMaxPeriod ());
        if (typeid (oadrSamplingRateType::oadrMaxPeriod_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "oadrMaxPeriod",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "oadrMaxPeriod",
            "http://openadr.org/oadr-2.0b/2012/07",
            false, true, e, x);
      }

      // oadrOnChange
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrOnChange",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrOnChange ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrSamplingRateType >
    _xsd_oadrSamplingRateType_type_serializer_init (
      "oadrSamplingRateType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

