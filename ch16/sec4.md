# sec4. Unions - Their Use

## To Save Space
- when similar types of structures are needed to be stored but only one of them is required

## To Build Mixed Data Structures
- just like a list in Python or JavaScript(various types of variables could be assembled together)

## Adding a "Tag Field" to a Union
- a major problem of unions: we don't know which member was last changed(so that it contains a meaningful value
- in order to keep track of the information, we may embed the union within a structure that has one other member "tag field"