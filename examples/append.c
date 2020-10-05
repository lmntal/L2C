struct port { void *obj; struct port *ref; };
typedef struct port port;
struct list {
	int _tag;
	port X;
	union {
		struct {
		} /* nil */ ;
		struct {
			port A1;
			port B1;
		} /* cons */ ;
	};
};
typedef struct list list;
void append(port *arg0, port *arg1, port *arg2) {
	{
		if ((*arg0).obj && ((list *)(*arg0).obj)->_tag == 1) {
			(*(*arg2).ref) = (*arg1);
			(*(*arg1).ref) = (*arg2);
			free(arg2); /* port */
			free(arg1); /* port */
			free((*arg0).obj); /* list */
			free(arg0); /* port */
			return;
		}
	}
	{
		if ((*arg0).obj && ((list *)(*arg0).obj)->_tag == 2) {
			if ((*arg0).ref == &((list *)(*arg0).obj)->X) {
				port *f0_arg0 = malloc(sizeof(port));
				port *f0_arg1 = malloc(sizeof(port));
				port *f0_arg2 = malloc(sizeof(port));
				list *v1 = malloc(sizeof(list));
				v1->_tag = 2; /* cons */
				(*((port)((list *)(*arg0).obj)->B1).ref) = ((port){ .ref = f0_arg0 });
				(*f0_arg0) = ((port)((list *)(*arg0).obj)->B1);
				(*(*arg1).ref) = ((port){ .ref = f0_arg1 });
				(*f0_arg1) = (*arg1);
				v1->B1 = ((port){ .ref = f0_arg2 });
				(*f0_arg2) = ((port){ .obj = v1, .ref = &v1->B1 });
				(*((port)((list *)(*arg0).obj)->A1).ref) = ((port){ .obj = v1, .ref = &v1->A1 });
				v1->A1 = ((port)((list *)(*arg0).obj)->A1);
				(*(*arg2).ref) = ((port){ .obj = v1, .ref = &v1->X });
				v1->X = (*arg2);
				free(arg2); /* port */
				free(arg1); /* port */
				free((*arg0).obj); /* list */
				free(arg0); /* port */
				append(f0_arg0, f0_arg1, f0_arg2);
				return;
			}
		}
	}
}
