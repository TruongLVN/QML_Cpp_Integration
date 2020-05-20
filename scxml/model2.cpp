#include "model2.h"

Model2::Model2(Statemachinep *state)
{
    m_text = "text 2";
    m_state = state;
}

void Model2::setText(const QString &text)
{
    m_text = text;
    emit textChanged(m_text);
}

QString Model2::getText() const
{
    return m_text;
}

void Model2::handle_button1()
{
    m_state->submitEvent("back");
}

void Model2::handle_button2()
{
    m_state->submitEvent("button2_4");
}

void Model2::handle_button3()
{
    m_state->submitEvent("button2_3");
}
