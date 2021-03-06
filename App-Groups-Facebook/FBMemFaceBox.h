//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBDisplayableFaceBoxProtocol.h"
#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"

@class NSString;

@interface FBMemFaceBox : FBMemModelObject <FBDisplayableFaceBoxProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol>
{
}

- (id)recognizedUser;
- (id)bestRecognizedUser;
- (struct CGRect)faceRectValue;
- (struct CGSize)size;
- (struct CGPoint)center;
- (id)faceBoxGraphQLID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

