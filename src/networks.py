# Main network and testnet3 definitions updated for Cadex

params = {
    'Cadex_main': {
        'pubkey_address': 76, #Cadex src/chainparams.cpp L168
        'script_address': 16, #Cadex src/chainparams.cpp L169
        'genesis_hash': '000002dd36edb71433159b1de4553b4a81a9812ced68202c80a490cbeb9489a7' #Cadex src/chainparams.cpp L160
    },
    'Cadex_test': {
        'pubkey_address': 140, #Dash src/chainparams.cpp L237
        'script_address': 19, #Dash src/chainparams.cpp L238
        'genesis_hash': '00000d3afc6c78f97bbff2b80a77c20533c2c37cbddea1300b7c34eae0c81beb' #Cadex src/chainparams.cpp L226
    }
}
