/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class DVTMutableOrderedSet, IBMutableBijectiveDictionary;

@interface IBGroup : NSObject <NSCoding>
{
    DVTMutableOrderedSet *objectRecords;
    DVTMutableOrderedSet *objects;
    IBMutableBijectiveDictionary *identifierToRecordBijectiveDictionary;
    id <IBGroupDelegate> delegate;
}

@property __weak id <IBGroupDelegate> delegate; // @synthesize delegate;
@property(readonly) DVTMutableOrderedSet *objects; // @synthesize objects;
- (void).cxx_destruct;
- (id)objectWithIdentifier:(id)arg1;
- (id)identifierForObject:(id)arg1;
- (void)removeIdentifierForObject:(id)arg1;
- (void)setIdentifier:(id)arg1 forObject:(id)arg2;
- (void)removeObject:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)addObject:(id)arg1;
- (BOOL)recursivelyContainsObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)description;
- (id)objectRecordForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

