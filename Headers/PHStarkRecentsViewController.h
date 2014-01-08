/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewController.h"

@class PHRecentsManager;

__attribute__((visibility("hidden")))
@interface PHStarkRecentsViewController : PHStarkGenericTableViewController {
	PHRecentsManager* _recentsManager;
}
@property(retain) PHRecentsManager* recentsManager;
-(id)badgeString;
-(id)subtitleForNoContentBanner;
-(id)titleForNoContentBanner;
-(void)programmaticallySelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)viewDidDisappear:(BOOL)view;
-(float)defaultRowHeight;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)recentsManagerSignificantChangeNotification:(id)notification;
-(void)dealloc;
-(id)init;
@end

