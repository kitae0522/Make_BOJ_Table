from module import Make_BOJ_Table
import argparse
import json


def get_arguments():
    parser = argparse.ArgumentParser()
    parser.add_argument('--sort', '-s', nargs='*',
                        help='Example) p_id(default), tier', default=['p_id'], dest='sort')
    parser.add_argument('--direction', '-d', nargs='*',
                        help='Example) desc(default), asc', default=['desc'], dest='direction')

    sort_option: str = parser.parse_args().sort[0]
    direction_option: str = parser.parse_args().direction[0]
    return [sort_option, True if direction_option == 'asc' else False]


if __name__ == "__main__":
    args = get_arguments()
    with open('./init.json') as init:
        MBT = Make_BOJ_Table(json.load(init))
        MBT.run(args)
