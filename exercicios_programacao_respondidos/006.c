
#include <stdio.h>

enum StatusJob
{
    QUEUED,
    PROCESSING,
    COMPLETED,
    FAILED
};

void executarJob(enum StatusJob *jobStatus)
{
    *jobStatus = PROCESSING;
    printf("Job em processamento...\n");

    *jobStatus = COMPLETED;
}

int main(void)
{
    enum StatusJob jobStatus = QUEUED;

    printf("Status inicial da fila: QUEUED\n");

    executarJob(&jobStatus);

    if (jobStatus == COMPLETED)
    {
        printf("Job concluido com sucesso!\n");
    }

    return 0;
}