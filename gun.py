from pprint import pprint
import js2py
Gun = js2py.require('gun')


def handle_get(data, key):
    print(data.baz)


def main():
    # Grab reference to Gun
    #Gun = js2py.eval_js('Gun')
    # Init Gun & connect to our superPeer
    gun = Gun('http://localhost:8089/gun')
    # Get a reference to a node to work with
    baz = gun.get('baz')
    # Hopefully put some data to the graph
    baz.put({ 'foo': 'bar' })
    # With luck we will get it back
    gun.get('baz').on(handle_get)


if __name__ == "__main__":
    main()
