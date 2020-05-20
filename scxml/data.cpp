#include "data.h"

Data::Data()
{
 m_text = "text  1";
}

QString Data::get() const{
    return m_text;
}
