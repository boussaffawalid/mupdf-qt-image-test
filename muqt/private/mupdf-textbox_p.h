#ifndef MUPDF_TEXTBOX_P_H
#define MUPDF_TEXTBOX_P_H

extern "C" {
#include <mupdf/fitz.h>
}

namespace MuPDF
{

class TextBoxPrivate
{
public:
    TextBoxPrivate(fz_stext_span_s *ts)
        : text_span(ts)
    {

    }

    fz_stext_span_s *text_span;

};

} // end namespace MuPDF

#endif // end MUPDF_TEXTBOX_P_H
