class LRUCache
{
    public:
        struct node
        {

            int val;
            int key;
            node * next;
            node * prev;

            node(int _key, int _val)
            {

                val = _val;
                key = _key;
                next = NULL;
                prev = NULL;
            }
        };

    int cap;
    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);
    unordered_map<int, node*> mp;

    LRUCache(int capacity)
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(node *curr)
    {

        node *temp = head->next;

        head->next = curr;
        curr->prev = head;
        temp->prev = curr;
        curr->next = temp;
    }

    void delnode(node *curr)
    {
        node *previous = curr->prev;
        node *nxt = curr->next;
        previous->next = nxt;
        nxt->prev = previous;
       	// delete(curr);
    }

    int get(int _key)
    {

        if (mp.find(_key) != mp.end())
        {

            node *addr = mp[_key];
            int res = addr->val;
            mp.erase(_key);
            delnode(addr);
            addnode(addr);
            mp[_key] = head->next;
            cout<<addr-> key<<" "<<addr-> val;
            return res;
        }
        return -1;
    }

    void put(int _key, int _value)
    {

        if (mp.find(_key) != mp.end())
        {
            node *addr = mp[_key];
            mp.erase(_key);
            delnode(addr);
        }
        else if (mp.size() == cap)
        {
            node *lru = tail->prev;
            delnode(lru);
            mp.erase(lru-> key );
        }

        addnode(new node(_key, _value));
        mp[_key] = head->next;
    }
};

/**
 *Your LRUCache object will be instantiated and called as such:
 *LRUCache* obj = new LRUCache(capacity);
 *int param_1 = obj->get(key);
 *obj->put(key,value);
 */