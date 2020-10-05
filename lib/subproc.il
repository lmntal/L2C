Compiled Ruleset @602 
Compiled Rule 
	--atommatch:
		spec           [2, 2]
	--memmatch:
		spec           [1, 1]
		jump           [L209, [0], [], []]
	--guard:L209:
		spec           [1, 1]
		jump           [L202, [0], [], []]
	--body:L202:
		spec           [1, 6]
		commit         ["_init", 0]
		newmem       [1, 0, 0]
		loadruleset    [1, @601]
		newatom      [2, 1, 'module'_1]
		newatom      [3, 1, 'subproc'_1]
		alloclink    [4, 2, 0]
		alloclink    [5, 3, 0]
		unifylinks     [4, 5, 1]
		proceed        []


Compiled Ruleset @601   
Compiled Rule 
	--atommatch:
		spec           [2, 8]
	--memmatch:
		spec           [1, 22]
		findatom     [1, 0, $out_2]
		deref        [2, 1, 0, 0]
		func           [2, $in_2]
		getlink      [4, 2, 1]
		lockmem      [3, 2, "sub"]
		nfreelinks     [3, 1]
		stable         [3]
		newlist      [5]
		addtolist      [5, 4]
		newlist      [6]
		isground     [7, 5, 6]
		commit         ["_subp", 0]
		newlist      [8]
		getlink      [9, 2, 1]
		addtolist      [8, 9]
		removeatom     [1, 0, $out_2]
		removeatom     [2, 3, $in_2]
		removeground   [8, 3]
		removemem      [3, 0]
		removeproxies  [3]
		recursivelock  [3]
		getlink      [10, 2, 1]
		insertconnectorsinnull[11, [10]]
		newlist      [12]
		getlink      [13, 2, 1]
		addtolist      [12, 13]
		copyground   [14, 12, 0]
		getfromlist  [15, 14, 0]
		getfromlist  [16, 14, 1]
		newatom      [17, 0, 'subproc'.'data'_2]
		alloclink    [18, 17, 1]
		alloclink    [19, 17, 0]
		getfromlist  [20, 15, 0]
		unifylinks     [19, 20, 0]
		getlink      [21, 1, 1]
		unifylinks     [18, 21, 0]
		deleteconnectors[11, 16]
		loadmodule     [0, "subproc"]
		dropmem        [3]
		freemem        [3]
		freeatom       [1]
		freeatom       [2]
		freeground     [12]
		proceed        []

Compiled Rule 
	--atommatch:
		spec           [2, 7]
	--memmatch:
		spec           [1, 3]
		findatom     [1, 0, 'subproc'.'open'_2]
		deref        [2, 1, 0, 1]
		func           [2, 'subproc'.'data'_2]
		commit         ["_Rsub", 0]
		removeatom     [1, 0, 'subproc'.'open'_2]
		removeatom     [2, 0, 'subproc'.'data'_2]
		unify          [1, 1, 2, 0, 0]
		freeatom       [1]
		freeatom       [2]
		proceed        []

Compiled Rule 
	--atommatch:
		spec           [2, 7]
	--memmatch:
		spec           [1, 3]
		findatom     [1, 0, 'subproc'.'data'_2]
		deref        [2, 1, 0, 1]
		func           [2, 'subproc'.'open'_2]
		commit         ["_Rsub", 0]
		removeatom     [1, 0, 'subproc'.'data'_2]
		removeatom     [2, 0, 'subproc'.'open'_2]
		unify          [1, 1, 2, 0, 0]
		freeatom       [1]
		freeatom       [2]
		proceed        []


Module
'subproc' {@601}
Inline
