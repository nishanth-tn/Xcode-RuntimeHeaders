/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol XCElementAnchorDelegateP
- (void)anchorClose:(struct NSObject *)arg1;
- (BOOL)anchorPrepareToClose:(struct NSObject *)arg1;
- (BOOL)anchorCanBeClosed:(struct NSObject *)arg1;
- (void)anchorClearView:(struct NSObject *)arg1;
- (void)anchorRemoveFromView:(struct NSObject *)arg1;
- (void)anchorAddToView:(struct NSObject *)arg1;
- (void)anchorDiscardEditing:(struct NSObject *)arg1;
- (BOOL)anchorCommitEditing:(struct NSObject *)arg1;
- (BOOL)anchorIsEditing:(struct NSObject *)arg1;
- (void)anchorDidChangeContentGroupDisplayed:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 didChangeRepresentedObject:(id)arg2 previousObject:(id)arg3;
- (BOOL)anchor:(struct NSObject *)arg1 confirmRepresentedObject:(id)arg2;

@optional
- (void)anchorSelectionStateDidChange:(struct NSObject *)arg1;
- (void)anchorObjectDidChange:(struct NSObject *)arg1;
- (BOOL)anchor:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(id)arg3;
- (BOOL)anchor:(struct NSObject *)arg1 handleSelectionOf:(struct NSObject *)arg2;
- (BOOL)anchorIsInEditingState:(struct NSObject *)arg1;
- (BOOL)anchorIsEditing:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 objectDidEndEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 objectDidBeginEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 initialRepresentedObject:(id)arg2;
@end

