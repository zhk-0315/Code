#! /bin/bash

function check_cmd_ret() {
    RET="$?"

    if [ "$RET" != "0" ]; then
        echo "RET ERR: $RET"
        exit "$RET"
    else
        echo "RET SU: $RET"
        return "$RET"
    fi
}

[ -f ./test.cc ]
check_cmd_ret
