/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PHVoicemailListViewController, UILabel, NSString;
@protocol PHVoicemailListViewControllerConcrete;

__attribute__((visibility("hidden")))
@interface PHVoicemailFolderCell : XXUnknownSuperclass {
	UILabel* _folderLabel;
	UILabel* _countLabel;
	PHVoicemailListViewController<PHVoicemailListViewControllerConcrete>* _viewController;
}
@property(retain, nonatomic) PHVoicemailListViewController<PHVoicemailListViewControllerConcrete>* viewController;
@property(readonly, assign, nonatomic) NSString* deletedText;
+(float)height;
-(void)_updateCount;
-(void)_handleContentSizeDidChange:(id)_handleContentSize;
-(void)_handleStoreChanged:(id)changed;
-(void)prepareForReuse;
-(void)dealloc;
-(void)_updateFonts;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

