// file      : xsd/cxx/tree/parsing/int.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2005-2011 Code Synthesis Tools CC
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

#ifndef XSD_CXX_TREE_PARSING_INT_HXX
#define XSD_CXX_TREE_PARSING_INT_HXX

#include <xsd/cxx/ro-string.hxx>
#include <xsd/cxx/zc-istream.hxx>

#include <xsd/cxx/xml/string.hxx> // xml::transcode

#include <xsd/cxx/tree/text.hxx>  // text_content

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
      template <typename C>
      struct traits<int, C, schema_type::other>
      {
        typedef int type;

        static type
        create (const xercesc::DOMElement& e, flags f, container* c);

        static type
        create (const xercesc::DOMAttr& a, flags f, container* c);

        static type
        create (const std::basic_string<C>& s,
                const xercesc::DOMElement*,
                flags,
                container*);
      };

      template <typename C>
      int traits<int, C, schema_type::other>::
      create (const xercesc::DOMElement& e, flags f, container* c)
      {
        return create (text_content<C> (e), 0, f, c);
      }

      template <typename C>
      int traits<int, C, schema_type::other>::
      create (const xercesc::DOMAttr& a, flags f, container* c)
      {
        return create (xml::transcode<C> (a.getValue ()), 0, f, c);
      }

      template <typename C>
      int traits<int, C, schema_type::other>::
      create (const std::basic_string<C>& s,
              const xercesc::DOMElement*,
              flags,
              container*)
      {
        // This type cannot have whitespaces in its values. As result we
        // don't need to waste time collapsing whitespaces. All we need to
        // do is trim the string representation which can be done without
        // copying.
        //
        ro_string<C> tmp (s);
        trim (tmp);

        zc_istream<C> is (tmp);

        type t;
        is >> t;

        return t;
      }
    }
  }
}

#endif // XSD_CXX_TREE_PARSING_INT_HXX
