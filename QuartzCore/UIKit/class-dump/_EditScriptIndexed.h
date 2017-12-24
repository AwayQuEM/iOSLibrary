//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_EditScript.h>

@class _EditScriptIndexedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexed : _EditScript
{
    _EditScriptIndexedAtom *_currentScriptAtom;
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(_Bool)arg3 operationPrecedence:(long long)arg4;
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)initializeCurrentScriptAtom;
- (id)applyToArray:(id)arg1;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(_Bool)arg5;
- (void)dealloc;

@end

