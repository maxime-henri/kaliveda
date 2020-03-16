macro( create_version_control_header )

   if(WITH_GIT_INFOS)
      include(CreateGitVersionControlHeader)
      create_git_version_control_header()
   endif()

endmacro( create_version_control_header )
