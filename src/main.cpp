#include "my_process.h"
#include "pre_process.h"

int main()
{
    cout << "start prepreocess\n";
    pre_process();
    cout << "end prepreocess\n";
    cout << "start preocess\n";
    my_process();
    cout << "end prorecc\n";
    return 0;
}