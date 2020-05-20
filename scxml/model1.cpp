#include "model1.h"
#include <QDebug>

Model1::Model1(Statemachinep *state)
{
    m_text = "text 111";
    m_state = state;
}

void Model1::setText(const QString &text)
{
    m_text = text;
    emit textChanged(m_text);
}

QString Model1::getText() const
{
    return m_text;
}

void Model1::handle_button()
{
    if(m_state->isActive("State_1"))
    qDebug() << m_state->activeStateNames(true);
    m_state->submitEvent("button1_2");
}

