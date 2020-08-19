#ifndef MOCK_GET_TRANSACTION_H_
#define MOCK_GET_TRANSACTION_H_

#include <Command.h>
#include <PaymentException.h>

class MockGetTransaction : public Command
{
public:
    MockGetTransaction()
    {
        m_is_called = false;
        m_result = RESULT_SUCCESS;
        m_error_code = ERR_NONE;
    }
    ~MockGetTransaction() =default;

    void execute(CommandStruct &command_buffer, ResponseStruct &response_data)
    {
        m_is_called = true;
        if (m_result == RESULT_PROCESS_ERROR)
        {
            throw MajorError(m_error_code);
        }
        else if (m_result == RESULT_INTERNAL_ERROR)
        {
            throw CriticalError(m_error_code);
        }
        else {
            // TODO: Add EMVCL data to response data
        }
    }
    void set_result(uint16_t result)
    {
        m_result = result;
    }
    void set_error_code(uint32_t error_code)
    {
        m_error_code = error_code;
    }
    bool get_called()
    {
        return m_is_called;
    }

private:
    bool m_is_called;
    uint16_t m_result;
    uint32_t m_error_code;
    
};

#endif // MOCK_GET_TRANSACTION_H_
