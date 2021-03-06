//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class EGODatabase, EGODatabaseResult, EGODatabaseStatement, NSArray, NSString;

@interface EGODatabaseRequest : NSOperation
{
    NSArray *parameters;
    int tag;
    NSString *query;
    EGODatabase *database;
    int requestKind;
    id <EGODatabaseRequestDelegate> delegate;
    EGODatabaseStatement *statement;
    EGODatabaseResult *result;
}

+ (id)requestWithStatement:(id)arg1 parameters:(id)arg2;
@property(retain) EGODatabaseResult *result; // @synthesize result;
@property(nonatomic) int tag; // @synthesize tag;
@property(nonatomic) id <EGODatabaseRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) EGODatabase *database; // @synthesize database;
@property(nonatomic) int requestKind; // @synthesize requestKind;
- (void)dealloc;
- (void)didFailWithError:(id)arg1;
- (void)didSucceed;
- (void)main;
- (id)initWithStatement:(id)arg1 parameters:(id)arg2;
- (id)initWithQuery:(id)arg1 parameters:(id)arg2;
- (id)initWithQuery:(id)arg1;

@end

