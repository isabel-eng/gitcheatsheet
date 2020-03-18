CHAPTER 2

Initializing a Repository in an Existing Directory (for proyects that are not monitored)
1-
For linux: cd /home/user/my_proyect
For macOS: cd /Users/user/my_proyect
For Windows: cd C:/Users/user/my_proyect
2- git init

To start version-controlling existing files:
git add *.c
git add LICENSE
git commit -m 'Initial proyect version'

To clone an existing repository:
git clone <URL>
and to change the name, you use an additional argument: 
git clone <URL> new_name

To record changes to the repository
(checking the status of your files)
git status
or 
git status -s (for a simplified output)
and for files that are not being tracked use
git add FILE (This is also used to save changes in the file)

Ignoring files (files that you want untracked)
cat .gitinore
*.[oa] (ignore documents ending with .o or .a)
*~ (files whose names end with tilde)

To see what you’ve changed but not yet staged:
git diff
To see what you’ve changed but not yet staged:
git diff --staged
To see what you’ve staged so far:
--staged
or
--cached

Committing your changes:
git commit
Skipping the Staging Area:
git commit -a

Removing files (from your stage area):
rm FILE
Stages the file's removal:
git rm

To rename files:
git mv FILE_NAME NEW_FILE_NAME

To clone a proyect:
git clone https://github.com/isabel-eng/gitcheatsheet.git
git log

Limit log output:
git log --since=2.weeks

Undoing things:
git commit --amend

Unstaging a Staged File:
git add *
to unstage files:
git reset HEAD <FILE>

Working with remotes
To show which remotes servers you have configured:
git remote
To show the URLs:
git remote -v
To add remote repositories:
git remote add <shortname> <url>
to fetch all the information that someone has but that you don’t yet have in your repository:
git fetch <shortname>

Pushing to Your Remotes:
git push <remore> <branch>

To push any commits you’ve done back up to the server:
git push origin master

to see more information about a particular remote:
git remote show <remote>

To change a remote’s shortname:
git remote rename

To remove a remote:
git remote remove
or
git remote rm

Tagging
To listing your tags:
git tag (with optional -l or --list)
To share tags:
got push origin (tagname)
To delate tags:
git tag -d <tagname>
To check out tags:
git checkout <tagname>

CHAPTER 3
Git branching
To create a new branch:
git branch <branchname>
HEAD pointing to a branch (shows you where the branch pointers are pointing):
git log -- decorate
To switch an existing branch:
git checkout testing
Create a new branch and switch to it:
git checkout -b <branchname>	
git checkout -b [branch name] origin/<branchname>	Clone a remote branch and switch to it
Switch to a branch
git checkout <branchname>
Hotfix branch based on master:
git checkout master
git merge hotfix
master is fast-forwarded to hotfix:
$ git branch -d hotfix
Deleted branch hotfix <branchname>
Merge a branch into the active branch:
git merge <branchname>	
Merge a branch into a target branch:
git merge [source branch] <branchname>	
List branches (the asterisk denotes the current branch):
git branch	
Delete a branch:
git branch -d [branch name]	
To see which branches are already merged into the branch you’re on:
git branch --merged
To see all the branches that contain work you haven’t yet merged in:
git branch --no.merged
Get a full list of remote references explicitly with:
git ls-remote <remote>
or
git remote shoe <remote>
To synchronize your work with a given remote:
git fetch <remote>
To add another server as a remote:
git fetch teamone
To share a branch:
git push <remote> <branch>
To track branches:
git checkout --track <branchname>
To set up a local branch with a different name than the remote branch:
git checkout -b sf <branchname>
To change the upstream branch you’re tracking:
git branch -u
To look up what server and branch your current branch is tracking:
git pull
Delete a remote branch:
git push origin --delete <branchname>
To rebase the server branch onto the master branch without having to check it out first:
git rebase <basebranch> <topicbranch>